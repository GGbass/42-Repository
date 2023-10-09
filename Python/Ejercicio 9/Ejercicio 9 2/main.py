from functools import reduce

Lista = [1,2,3,4,5,6,7,8,9,10]
def main(x):
        result = list(filter((lambda x: x % 2 != 0), x ))
        print(f'resultado del filter {result}')

        result = reduce((lambda a, b : a + b), result)
        print(f'resultado del reduce {result}')

a1 = main(Lista)               
        
#result2 = reduce(suma,[Lista])
#print(f'{result2} resultado del reduce')

#result2 = reduce((lambda a,b: a + b),list[result])
#print(f'{result2} resultado del reduce')

if __name__ == ' main ':
        main()