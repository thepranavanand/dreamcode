import pandas as pd
myfile= pd.read_excel(r"C:E:\Dream Code\Student_marks.xlsx")
print(myfile.head(12).tail(4))