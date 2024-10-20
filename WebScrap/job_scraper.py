import requests
from bs4 import BeautifulSoup
import pandas as pd

# Function to get job listings
def get_job_listings(url):
    headers = {
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.121 Safari/537.36"
    }
    
    response = requests.get(url, headers=headers)
    
    # Check if the request was successful
    if response.status_code != 200:
        print(f"Error: Unable to access the page. Status code: {response.status_code}")
        return []
    
    soup = BeautifulSoup(response.text, 'html.parser')
    job_cards = soup.find_all('div', class_='jobsearch-SerpJobCard')
    
    jobs = []
    
    # Extract job details
    for card in job_cards:
        title = card.find('h2', class_='title').text.strip()
        company = card.find('span', class_='company').text.strip()
        location = card.find('div', class_='location').text.strip() if card.find('div', class_='location') else 'Remote'
        posting_date = card.find('span', class_='date').text.strip()
        
        jobs.append({
            'Title': title,
            'Company': company,
            'Location': location,
            'Posting Date': posting_date
        })
    
    return jobs

# Main function to run the scraper
def main():
    base_url = 'https://www.linkedin.com/jobs/search/?currentJobId=3957576611&distance=25&geoId=107714860&keywords=software%20engineer%20in%20dehradun&origin=JOB_SEARCH_PAGE_SEARCH_BUTTON&refresh=true'
    total_jobs = []

    # Loop through multiple pages (e.g., first 5 pages)
    for page in range(0, 50, 10):  # Indeed typically shows 10 results per page
        url = f"{base_url}&start={page}"
        print(f"Scraping URL: {url}")
        job_listings = get_job_listings(url)
        total_jobs.extend(job_listings)

    # Convert the list of jobs into a DataFrame
    df = pd.DataFrame(total_jobs)

    # Save the DataFrame to a CSV file
    df.to_csv('job_listings.csv', index=False)
    print("Job listings have been saved to job_listings.csv")

if __name__ == '__main__':
    main()
