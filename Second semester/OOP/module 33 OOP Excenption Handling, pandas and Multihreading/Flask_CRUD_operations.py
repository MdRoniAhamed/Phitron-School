#Flask CRUD Operations Using JSON File
from flask import Flask, jsonify, request

app = Flask(__name__)

students = [{'id': 1, 'name': 'Roni'},{'id': 2, 'name': 'Karim'}]
@app.route('/')
def home():
    return jsonify(students)

@app.route('/add',methods=['GET','POST'])
def add():
    students.append(request.args)
    return "Student added"

@app.route('/update', methods = ["GET", "PUT"])
def update():
    for student in students:
        if str( student.get('id')) == request.args.get('id'):
            student.update(request.args)
    return "Student update successfully"

@app.route("/delete", methods=['GET','DELETE'])
def delete():
    for i in range(len(students)):
        if str(students[i].get('id')) == request.args.get('id'):
            del students[i]
            break
    return "Delete successfully"

app.run(debug=True)