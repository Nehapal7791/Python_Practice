from schema import Schema

#schema validates data with its type int,str,object else will raise schemaError
Schema(int).validate(124)
Schema(str).validate('12122')
Schema(object).validate("hai")

