import request_library
import json
import logging
logging.basicConfig(
    level=logging.INFO,
    format='%(levelname)s - %(message)s'
)
req = request_library.Req()
logging.info("1.Get Request with parameter")
logging.info("2.Get Request without parameter")
logging.info("3.Post Request")
logging.info("4.PUT Request")

def choice(number):
    if number == 1:
        url_to_get_data= 'https://jsonplaceholder.typicode.com/posts/'
        query_params = {}
        param_count = int(input("Enter the number of query parameters: "))
        for _ in range(param_count):
            key = input("Enter the parameter key: ")
            value = input("Enter the parameter value: ")
            query_params[key] = value
        get_response = req.get_request(url_to_get_data, query_params=query_params)
        logging.info("GET Response from server with query parameter:")
        formatted_result = json.dumps(get_response, indent=4)
        logging.info("Response from the server after the parameter you have provided:\n%s", formatted_result)
        
    elif number == 2:
        url_to_get_data= 'https://jsonplaceholder.typicode.com/posts/'
        get_response = req.get_request(url_to_get_data)
        logging.info("GET Response from server:")
        formatted_result = json.dumps(get_response, indent=4)
        logging.info("Response from the server after the parameter where userID='1':\n%s", formatted_result)

    elif number == 3:
        logging.info("On which type of data you want to hit the put request? xml/json")
        logging.info("Enter choice 1 for json and 2 for xml")
        data_choice = int(input("Enter data preference: "))
        
        if data_choice==1:
            url_to_post_jsondata = 'https://jsonplaceholder.typicode.com/posts/'
            json_data = json.loads(input("Enter the JSON data: "))
            post_response = req.post_json_request(url_to_post_jsondata, json_data)
            logging.info("3.POST Response for application/json:\n%s", json.dumps(post_response, indent=4))

        if data_choice==2:

            url_to_post_xmldata = 'https://httpbin.org/post'
            xml_file = 'xml_data_input.xml'
            logging.info("xml code in .xml file")
            with open(xml_file, 'r') as file:
                xml_data = file.read()

            logging.info("4.POST Response for application/xml:")
            response = req.post_xml_request(url_to_post_xmldata, xml_data)
            logging.info("Post_content :", response.text)
            
    elif number == 4:
        url_to_put_data = 'https://jsonplaceholder.typicode.com/posts/1'
        json_string = input('Enter the JSON data in the format: {"userId": 120, "username": "neha pal"}')
        try:
            data = json.loads(json_string)
        except json.JSONDecodeError:
            logging.error("Invalid JSON format. Please try again.")

        put_response = req.put_request(url_to_put_data, data)
        logging.info("5.UPDATE Response:")
        logging.info("Content Updated:\n%s",json.dumps(put_response, indent=4))
        
    else:
         logging.error("Invalid Choice")


number=int(input("Enter your choice: "))
choice(number)

