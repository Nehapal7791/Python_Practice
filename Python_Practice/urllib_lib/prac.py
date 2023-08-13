import urllib3
pool= urllib3.PoolManager()#create a connection pool
retries =urllib3.Retry(total=3,backoff_factor=0.2,status_forcelist=[500,502,503,504])

response=pool.request('GET',"http://httpbin.org/robots.txt",retries=retries)

print(response.status)
print(response.data)