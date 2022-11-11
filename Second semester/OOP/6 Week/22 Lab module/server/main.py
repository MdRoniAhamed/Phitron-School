""" Object processor
    author: MD Roni Ahamed
    Gmail: mdroni0193101@gmail.com
"""
import glob

import shutil
import os

source_path = '../source/*'
destination_path = '../destination'

postfix = [1, 2, 3]
while True:

    source_object = glob.glob(source_path)

    if len(source_object) > 0:
        object_path = source_object[0]
        shutil.copy(object_path,'.')

        object_name = object_path.split('\\')[-1].split('.')
        prefix = object_name[0]
        postfix2 = object_name[1]

        for item in range(len(postfix)):
            file_name = prefix + "_" +str(item) + '.' + postfix2
            print(file_name)
            shutil.copy(object_path,f"{destination_path}/{file_name}")

        os.remove(object_path)
        os.remove(object_path.split('\\')[-1])