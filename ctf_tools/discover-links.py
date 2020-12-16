#!usr/bin/python3

import requests
from bs4 import BeautifulSoup

url = input("Enter URL(with http/https): ")
html = requests.get(url)

soup = BeautifulSoup(html.text, 'lxml')
links = soup.find_all("a")
for link in links:
	print(link.get('href'))
