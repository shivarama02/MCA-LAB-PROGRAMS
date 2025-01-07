# 5. Create a class Publisher (name). Derive class Book from Publisher with attributes title  and author. Derive class Python from Book with attributes price and no_of_pages. Write a program that displays information about a Python book. Use base class constructor invocation and method overriding.



class publisher:
    def __init__(self,name):
        self.name=name

    def display_info(self):
        print("\nPublisher : ",self.name)

class book(publisher):
    def __init__(self,name,title,author):
        super().__init__(name)
        self.title=title
        self.author=author

    def display_info(self):
        super().display_info()
        print("Title : ",self.title)
        print("Author : ",self.author)

class python(book):
    def __init__(self, name, title, author,price,pages):
        super().__init__(name, title, author)
        self.price=price
        self.pages=pages

    def display_info(self):
        super().display_info()
        print("Price : ",self.price)
        print("No of pages : ",self.pages)

python_book = python("DC BOOKS","RAM C/O ANANDHI","akhil p dharmajan",299,320)
python_book.display_info()