#Flask CRUD Operations Using JSON File
from flask import Flask, jsonify, request

app = Flask(__name__)

students = [{'id': 1, 'name': 'Roni'},{'id': 2, 'name': 'Karim'}]
@app.route('/')
def home():
    return jsonify(students)
 
@app.route('/add',methods=['POST'])
def add():
    students.append(request.get_json())
    print(request.get_json())
    return "Student added successfully.", 200

@app.route('/update', methods = ["PUT"])
def update():
    for student in students:
        if  student.get('id') == request.get_json().get('id'):
            student.update(request.get_json())
    print("Student update successfully",request.get_json())
    return "Student update successfully"

@app.route("/delete", methods=['DELETE'])
def delete():
    for i in range(len(students)):
        if students[i].get('id') == request.get_json().get('id'):
            del students[i]
            break
    print("student Deleted successfully",request.get_json())
    return "Delete successfully"

app.run(debug=True)