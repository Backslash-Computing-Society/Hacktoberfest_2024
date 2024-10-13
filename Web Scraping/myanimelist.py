from bs4 import BeautifulSoup
import requests

r=requests.get('https://myanimelist.net/topanime.php').text
soup=BeautifulSoup(r,'html.parser')

#Longer way
# table=soup.find('table',attrs={'class':'top-ranking-table'})
# fields = table.find_all('tr', attrs={'class': 'ranking-list'})
# for field in fields:
#     rank = field.find('td', attrs={'class': 'rank ac'}).text.strip()
#     name_td = field.find('td', attrs={'class': 'title al va-t word-break'})
#     name = name_td.find('h3', attrs={'class': 'fl-l fs14 fw-b anime_ranking_h3'}).text.strip()
#     url = name_td.find('a')['href']
#     rating_td = field.find('td', attrs={'class': 'score ac fs14'})
#     rating = rating_td.find('span').text.strip()
#
#     print(f"Rank: {rank}")
#     print(f"Name: {name}")
#     print(f"Rating: {rating}")
#     print(f"URL: {url}\n")



easy=soup.select('table.top-ranking-table tr.ranking-list')
for easy_row in easy:
    rank = easy_row.find('td', attrs={'class': 'rank ac'}).text.strip()
    name_td = easy_row.find('td', attrs={'class': 'title al va-t word-break'})
    name = name_td.find('h3', attrs={'class': 'fl-l fs14 fw-b anime_ranking_h3'}).text.strip()
    url = name_td.find('a')['href']
    rating_td = easy_row.find('td', attrs={'class': 'score ac fs14'})
    rating = rating_td.find('span').text.strip()

    print(f"Rank: {rank}")
    print(f"Name: {name}")
    print(f"Rating: {rating}")
    print(f"URL: {url}\n")