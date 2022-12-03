""" My cute Api """ 

from multiprocessing.sharedctypes import Value
from flask import Flask, request

database = {'roni':'100', 'fariha':'500'}

# Initialize flask app
app = Flask(__name__)

@app.route('/', methods= ['GET'])
def home():
    return "Welcome to my cute API"

@app.route('/getdata/', methods=['GET'])
def get_data():
    return database

@app.route('/adddata/',methods=['PUT'])
def add_data():
    key, value = list(request.args.items())[0]
    database[key] = value
    return f"{key} added"

@app.route('/deletedata',methods=['DELETE'])
def delete_data():
    key,Value = list(request.args.items())[0]
    database.pop(Value)
    return f"{Value} deleted"

if __name__ == '__main__':
    app.run()

# HW.
# value update . found not found tahola error show korba, r thakla value update korba.
