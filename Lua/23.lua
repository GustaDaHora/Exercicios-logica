local conj1 = {7, 25, -2, 80, -31}
local conj2 = {81, 12, 7, -90, 16}
local conj3 = {}

for i = 1, #conj1 do
    conj3[i] = conj1[i] + conj2[i]
    print(conj3[i])
end