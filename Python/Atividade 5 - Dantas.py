class Sites():

    def __init__(self):

        self.data = ['Google','Youtube','Gmail','Facebook','Ifal']



    def empty (self):

        return len(self.data) == 0



    def show (self):

        return self.data



    def len (self):

        return (len(self.data)) 



    def catch (self, data):

        return self.data[data]





websites = Sites()

x = (-1)

link = ()



while x != 0:

    print ('\n\nDigite:\n\n1 - Ver lista de sites.\n2 - Gostaria de ver o link de algum dos sites.\n0 - SAIR')

    x =  int(input('\nGostaria de executar qual função? '))



    if x == 1:

        print ('\n\nLista dos sites: \n\n')

        for i in range (0,websites.len()):

            print ('{}\n'.format(websites.catch(i)))



    if x == 2:



        link=input('\n\nGostaria de ver o link de qual site?: ')



        if link in websites.data:

            if link in websites.data[0]:

                link = ('\nwww.{}.com.br'.format(link))

                print (link)



            if link in websites.data != [0]:

                websites.data.insert(0,link)

                websites.data.reverse()

                websites.data.remove(link)

                websites.data.reverse()



                link = ('\nwww.{}.com.br'.format(link))

                print (link)

    if x == 0:

        break
