""" 
    Problem:
    Download and change desktop wallpapers automatically 
"""

import requests
import json
import PyWallpaper 

api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

# get the json
response = requests.get(api_url)
content = response.content.decode('UTF-8')

# convert string to json
dict_content = json.loads(content)

# Get the image url
image_url = dict_content['url']

res = requests.get(image_url)
print(res)

# Save the image
with open('apon.png', 'wb') as image:
    image.write(res.content)

# Set as wallpaper
PyWallpaper.change_wallpaper('apon.png')