function vetor_multiplicado(vetor, multiplicador)
  for i = 1, #vetor do
    vetor[i] = vetor[i] * multiplicador
    print(vetor[i])
  end
end

vet = {30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0}

print("Digite o número para ser o fator multiplicador do vetor:")
local mult = tonumber(io.read())
vetor_multiplicado(vet, mult)
