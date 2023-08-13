import requests
import json

class Req:
    def get_request(self, url, query_params=None):
        response = requests.get(url, params=query_params)
        if response.status_code == 200:
            print("GET request successful!")
        else:
            print("Failed to retrieve data. Status code:", response.status_code)
        return response.json()
    
    def post_json_request(self, url, json_data):
        response = requests.post(url, json=json_data)
        if response.status_code == 201:
            print("POST request successful!")
        else:
            print("Failed to post data. Status code:", response.status_code)
        return response.json()
    
    def post_xml_request(self, url, xml_data):
        headers = {'Content-Type': 'application/xml'}
        response = requests.post(url, data=xml_data, headers=headers)
        if response.status_code == 201:
            print("Data posted successfully!")
        else:
            print("Failed to post data. Status code:", response.status_code)
        return response
    
    def put_request(self, url, data):
        response = requests.put(url, data=data)
        if response.status_code == 200:
            print("Data updated successfully!")
        else:
            print("Failed to update data. Status code:", response.status_code)
        return response.json()

url_to_get_data = 'https://jsonplaceholder.typicode.com/posts/'
query_params = {
    'userId': 1 
}
url_to_post_jsondata = 'https://jsonplaceholder.typicode.com/posts/'
json_data = {
    'userId': 120,
    'username': 'neha pal',
    'title':'This is my post'
}
url_to_post_xmldata = 'https://jsonplaceholder.typicode.com/posts/'
xml_data = '''
<user>
    <name>John Doe</name>
    <age>25</age>
</user>
'''
url_to_put_data = 'https://jsonplaceholder.typicode.com/posts/1'
data = {
    'title': 'Updated Title',
    'body': 'Updated Body',
    'userId': 1
}
req = Req()
result_to_get_method = req.get_request(url_to_get_data,query_params)
formatted_result = json.dumps(result_to_get_method, indent=4)
print(formatted_result)

result_to_post_json = req.post_json_request(url_to_post_jsondata, json_data)
formatted_result = json.dumps(result_to_post_json, indent=4)  
print(formatted_result)

result_to_post_xml = req.post_xml_request(url_to_post_xmldata, xml_data)
print(result_to_post_xml.text)

result_to_put_request = req.put_request(url_to_put_data, data)
formatted_result = json.dumps(result_to_put_request, indent=4)
print(formatted_result)
