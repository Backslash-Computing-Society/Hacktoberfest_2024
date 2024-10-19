from bs4 import BeautifulSoup
import pandas as pd
import requests

r = requests.get('https://timesofindia.indiatimes.com/home/headlines').text
df=pd.DataFrame(columns=['headline','url'])
soup = BeautifulSoup(r, 'html.parser')
count=0

all_news = soup.find_all('ul', class_='clearfix')
# print(all_news)
for ul in all_news:
    list_items = ul.find_all('li')
    for li in list_items:
        spans = li.find_all('span', class_='w_tle')
        for span in spans:
            a_tags=span.find_all('a')
            for a_tag in a_tags:
                if a_tag is not None:
                    headline = a_tag.get('title')
                    url = a_tag.get('href')

                    print(f'Headline: {headline} \n')
                    print(f'Url: {url} \n')

                    df.loc[len(df)] = [headline,url]


print(df)


count2=0
a_tags_easier = soup.select('ul.clearfix li span.w_tle a')
for a_tag in a_tags_easier:
    if a_tag is not None:
        title = a_tag.get('title')
        href = a_tag.get('href')

        print(f"Headline: {title}\n")
        print(f"URL: {href}\n")
        count2+=1

        if count2>=10:
            break


