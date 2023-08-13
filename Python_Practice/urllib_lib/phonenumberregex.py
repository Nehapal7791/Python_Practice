import re

phone_number_pattern = r"^[6-9]\d{9}$"

def validate_phone_number(phone_number):
    if re.match(phone_number_pattern, phone_number):
        return True
    else:
        return False
phone_number = "90923092309"

print(validate_phone_number(phone_number))