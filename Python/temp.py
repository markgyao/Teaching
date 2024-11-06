# implementing a data cloass for contacts   
import dataclasses

@dataclasses.dataclass
class Contact:
    name: str
    phone: str
    email: str
    address: str

# create a list of contacts
contacts = [
    Contact("Mark", "555-1234", "JkzY7@example.com", "123 Main St."),
    Contact("Jane", "555-5678", "JkzY7@example.com", "456 Main St."),
    Contact("Bob", "555-9012", "JkzY7@example.com", "789 Main St."),
]

# print the list of contacts
for contact in contacts:
    print(contact)

# testing serialization and deserialization of contacts
import pickle

with open("contacts.pickle", "wb") as f:
    pickle.dump(contacts, f)

with open("contacts.pickle", "rb") as f:
    loaded_contacts = pickle.load(f)

print(loaded_contacts)