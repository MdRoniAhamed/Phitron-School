import my_code

api_url = "https://api.nasa.gov/planetary/apod?api_key=DEMO_KEY"

def test_get_response():
    ret = my_code.get_response(api_url)
    assert ret.status_code == 200 