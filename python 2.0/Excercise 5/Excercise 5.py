import pandas as pd


def convert_to_csv(excel_file, csv_file):
    # el archivo de Excel
    df = pd.read_excel(excel_file)
    
    
    df.to(csv_file, index=False)
    
    print(f"El archivo '{excel_file}' ha sido convertido exitosamente a '{csv_file}'.")

# Ejemplo de uso
excel_file = "C:\Users\User\Desktop\bootcamp task\python 2.0\Excercise 5\libro1.xlsx"
csv_file = "C:\Users\User\Desktop\bootcamp task\python 2.0\Excercise 5\libronuevo.csv"
convert_to_csv(excel_file, csv_file)