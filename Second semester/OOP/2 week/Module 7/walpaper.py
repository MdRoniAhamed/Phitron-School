""" 
    Problem:
    Download and change desktop wallpapers automatically 
"""
from email.mime import image
import requests

import json
import PyWallpaper

api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

response = requests.get(api_url)
content = response.content.decode('UTF-8')

dict_content = json.loads(content)

image_url = dict_content['url']

res = requests.get(image_url)
print(res)

with open('apon.png','wb') as image:
    image.write(res.content)

PyWallpaper.change_wallpaper('flower.jpg')