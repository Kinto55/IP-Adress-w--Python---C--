def ip_address(address):
    # The above code is splitting the address string into a list of strings, then joining the list
    # of strings with the separator "[.]"
    new_address = ""
    split_address = address.split(".")
    separator = "[.]"
    new_address = separator.join(split_address)
    return new_address

    # Calling the function ip_address and passing in the string "1.1.2.3" as the argument.
    ipaddress = ip_address("1.1.2.3")
    print(ipaddress)   # 1[.]1[.]2[.]3
