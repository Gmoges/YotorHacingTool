import phonenumbers



from phonenumbers import geocoder
from phonenumbers import carrier

number = "+" + input("Enter the Number: " + "+")

ch_num = phonenumbers.parse(number, "CH")




service_num = phonenumbers.parse(number, "RO")
print("  ")
print("  ")
print("     YOTOR GOT ======>")
print("               ======>")
print(geocoder.description_for_number(ch_num, "en"))
print(carrier.name_for_number(service_num, "en"))
print("  ")
print("  ")