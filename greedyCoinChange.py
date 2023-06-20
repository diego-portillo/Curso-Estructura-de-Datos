import random

def greedy_change(coins_set, change, coins):

    for i in range(len(coins_set)):
        if change == 0:
            
            return coins
        
        if change < max(coins_set) and len(coins_set) > 1:
            coins_set.remove(max(coins_set))
        
        if change >= max(coins_set):
            coins.append(max(coins_set))
            return greedy_change(coins_set, change - max(coins_set), coins)


if __name__ == '__main__':

    change = random.randint(7, 100)
    print(f'Se devolveran {change} pesos de vuelto\n')
    coins_set = [1, 5 ,10, 20]
    coins = []

    greedy_change(coins_set, change, coins)
    print('Entregaremos las siguientes monedas: ', coins)