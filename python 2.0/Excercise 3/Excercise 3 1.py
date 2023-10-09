def lista_primos(N):
    def es_primo(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5)+1):
            if num % i == 0:
                return False
        return True
    
    primos = [num for num in range(2, N+1) if es_primo(num)]
    es_primo(n)
    return primos
    
n = int(input("ingresar valor "))

lista_primos(n)
    
