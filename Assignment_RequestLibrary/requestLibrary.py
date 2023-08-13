import requests
import logging
logging.basicConfig(
    level=logging.INFO,
    format='%(levelname)s - %(message)s'
)
class Req:
    def get_request(self, url, query_params=None):
        response = requests.get(url, params=query_params)
        if response.status_code == 200:
            logging.info("GET request successful!")
        else:
            logging.error("Failed to retrieve data. Status code: %d", response.status_code)

        if response.headers.get('Content-Type') == 'application/json; charset=utf-8':
            logging.info("Content Type and charset is Verified : Content Type is %s", response.headers.get('Content-Type'))
        else:
            logging.warning("Content not verified")

        return response.json()
    
    def post_json_request(self, url, json_data):
        response = requests.post(url, json=json_data)
        if response.status_code == 201:
            logging.info("POST request successful!")
        else:
            logging.error("Failed to post data. Status code: %d", response.status_code)
        
        if response.headers.get('Content-Type') == 'application/json; charset=utf-8':
            logging.info("Content Type and charset is Verified : Content Type is %s", response.headers.get('Content-Type'))
        else:
            logging.warning("Content not verified")
        
        return response.json()
    
    def post_xml_request(self, url, xml_data):
        response = requests.post(url, data=xml_data, headers={'Content-Type': 'application/xml'})
        if response.status_code == 201:
            logging.info("POST request successful!")
        else:
            logging.error("Failed to post data. Status code: %d", response.status_code)

        response_content_type = response.headers.get('Content-Type')

        if response_content_type == 'application/xml':
            logging.info("Content type is XML")
        else:
            logging.warning("Content type is not XML. Actual content type: %s", response_content_type)
        
        return response
    
    def put_request(self, url, data):
        response = requests.put(url, data=data)
        if response.status_code == 200:
            print("Data updated successfully!")
        else:
            print("Failed to update data. Status code:", response.status_code)

        if response.headers.get('Content-Type') == 'application/json; charset=utf-8':
            print("Content Verified application/json")
        else:
            print("Content type is other than application/json ")

        return response.json()