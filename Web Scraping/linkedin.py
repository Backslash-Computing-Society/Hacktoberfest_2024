from bs4 import BeautifulSoup
import requests

url="https://www.linkedin.com/jobs/search/?currentJobId=3957576611&distance=25&geoId=107714860&keywords=software%20engineer%20in%20dehradun&origin=JOB_SEARCH_PAGE_SEARCH_BUTTON&refresh=true"

r=requests.get(url).text
# print(r)
soup=BeautifulSoup(r,"html.parser")

job_list=soup.find('ul',attrs={'class':'jobs-search__results-list'})
list_items=job_list.find_all('li')
id_list=[]
# curr_id=id_text=item.find('a',attrs={'data-tracking-control-name':'public_jobs_jserp-result_search-card'}).get('data-entity-urn')
for item in list_items:
    id_text=item.find('a',attrs={'data-tracking-control-name':'public_jobs_jserp-result_search-card'}).get('data-entity-urn')
    if id_text is not None:
        id_list.append(id_text[-10:])
    else:
        id_div=item.find('div',attrs={'class':'base-card relative w-full hover:no-underline focus:no-underline base-card--link base-search-card base-search-card--link job-search-card'}).get('data-entity-urn')
        if id_div is not None:
            id_list.append(id_div[-10:])

c=0
for item in list_items:
    title=item.find("div",attrs={'class':'base-search-card__info'}).h3.text.strip()
    url=item.find("a").get("href")
    company=item.find("div",attrs={'class':'base-search-card__info'}).h4.text.strip()
    location=item.find("div",attrs={"class":"base-search-card__metadata"}).span.text.strip()
    post_time="Posted "+item.find("div",attrs={"class":"base-search-card__metadata"}).time.text.strip()+" on "+item.find("div",attrs={"class":"base-search-card__metadata"}).time['datetime']

    url2="https://www.linkedin.com/jobs/search/?currentJobId="+id_list[c]+"&distance=25&geoId=107714860&keywords=software%20engineer%20in%20dehradun"
    r2=requests.get(url2).text
    soup2=BeautifulSoup(r2,"html.parser")
    desc=soup2.find('div',attrs={'class':'details-pane__content details-pane__content--show'})
    # content=desc.find('section',attrs={'class':'show-more-less-html show-more-less-html--more'}).text.strip()
    c+=1
    print(f"Job Title: {title}")
    print(f"Location: {location}")
    print(f"Company: {company}")
    print(f"Posting Time: {post_time}")
    print(f"Description: {desc}")
    print(f"URL: {url}")
    print("\n")