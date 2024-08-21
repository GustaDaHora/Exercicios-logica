#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <limits>

using namespace std;

class Grafo
{
public:
    // Construtor que inicializa o grafo com um número de vértices
    Grafo(int vertices)
    {
        this->vertices = vertices;
        adjList.resize(vertices);
    }

    // Função para adicionar uma aresta entre dois vértices com um peso
    void adicionarAresta(int u, int v, int peso)
    {
        adjList[u].emplace_back(v, peso);
        adjList[v].emplace_back(u, peso); // Para grafo não-direcionado
    }

    // Função para encontrar o caminho mais curto do vértice de origem para todos os outros vértices
    void dijkstra(int origem)
    {
        // Cria uma lista de distâncias e inicializa com infinito
        vector<int> distancia(vertices, numeric_limits<int>::max());
        distancia[origem] = 0;

        // Usando uma fila de prioridade (min-heap) para encontrar o vértice com a menor distância
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.emplace(0, origem);

        while (!pq.empty())
        {
            int distAtual = pq.top().first;
            int u = pq.top().second;
            pq.pop();

            // Ignorar se a distância já foi atualizada para um valor menor
            if (distAtual > distancia[u])
                continue;

            // Relaxamento das arestas adjacentes
            for (auto &[v, peso] : adjList[u])
            {
                if (distancia[u] + peso < distancia[v])
                {
                    distancia[v] = distancia[u] + peso;
                    pq.emplace(distancia[v], v);
                }
            }
        }

        // Imprime as distâncias do vértice de origem para todos os outros vértices
        for (int i = 0; i < vertices; ++i)
        {
            cout << "Distância do vértice " << origem << " para o vértice " << i << ": " << distancia[i] << endl;
        }
    }

private:
    int vertices;
    vector<vector<pair<int, int>>> adjList; // Lista de adjacência (vértice, peso)
};

int main()
{
    Grafo g(5); // Cria um grafo com 5 vértices

    // Adiciona arestas (u, v, peso)
    g.adicionarAresta(0, 1, 2);
    g.adicionarAresta(0, 4, 8);
    g.adicionarAresta(1, 2, 3);
    g.adicionarAresta(1, 3, 7);
    g.adicionarAresta(1, 4, 5);
    g.adicionarAresta(2, 3, 1);
    g.adicionarAresta(3, 4, 2);

    int origem = 5;
    cout << "Caminho mais curto a partir do vértice " << origem << ":" << endl;
    g.dijkstra(origem);

    return 0;
}
