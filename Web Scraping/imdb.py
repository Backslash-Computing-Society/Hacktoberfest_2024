import requests
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from bs4 import BeautifulSoup
import time
#
# # Setup Selenium with Chrome WebDriver
# options = Options()
# options.add_argument("--headless")  # Run in headless mode, without opening the browser
# options.add_argument("--disable-gpu")  # Necessary for headless mode
# options.add_argument("--no-sandbox")  # Bypass OS security model
# options.add_argument("--disable-dev-shm-usage")  # Overcome limited resource problems
#
# service = Service('D:\chromedriver-win64\chromedriver-win64\chromedriver.exe')  # Specify the path to your ChromeDriver
# driver = webdriver.Chrome(service=service, options=options)
#
# # Open the LinkedIn job URL
url = "https://www.linkedin.com/jobs/search/?currentJobId=3983052503&distance=25&geoId=107714860&keywords=software%20engineer%20in%20dehradun&position=3&pageNum=0"
# driver.get(url)
# driver.print_page()
# Wait for the page to load completely
# time.sleep(5)  # Adjust the sleep time if necessary

# Explicitly wait for the dismiss button to appear and then click it
# try:
#     dismiss_button = WebDriverWait(driver, 10).until(
#         EC.element_to_be_clickable((By.CLASS_NAME, "modal__dismiss"))
#     )
#     dismiss_button.click()
#     time.sleep(1)  # Allow time for the pop-up to be dismissed
# except Exception as e:
#     print("Dismiss button not found or could not be clicked:", str(e))

# Now that the pop-up is closed, extract the page content

# Example LinkedIn job URL

r = requests.get(url)
if r.status_code == 200:
    soup = BeautifulSoup(r.text, "html.parser")


    print(r.text)

    # # Find and remove the pop-up if it exists
    # pop_up = soup.find('div', attrs={'class': 'modal__main w-full '})
    # if pop_up:
    #     pop_up.decompose()  # Remove the pop-up element from the soup

    # Now, proceed to find the job description
#     description_div = soup.find('div', attrs={'class': 'details-pane__content details-pane__content--show'})
#     print(description_div)
#     if description_div:
#         job_description = description_div.text
#         print("Job Description:", job_description)
#     else:
#         print("Job description not found or blocked by a pop-up.")
# else:
#     print("Failed to retrieve the webpage.")
