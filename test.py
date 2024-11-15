import os
import pandas as pd
import numpy as np

def clean_motorpos_column(input_file, output_file):
    # Read the ODS file, keeping only the first 17 columns
    data = pd.read_csv(input_file, sep=',', usecols=np.arange(0, 17))

    # Save the cleaned data back to a CSV file
    data.to_csv(output_file, index=False)
    print(f"Updated file saved to: {output_file}")

def process_all_files(root_dir):
    # Walk through the directory tree
    for dirpath, _, filenames in os.walk(root_dir):
        for file in filenames:
            if file == "outputGegelati.ods":
                # Full path of the input file
                input_file = os.path.join(dirpath, file)
                
                # Full path of the output file
                output_file = os.path.join(dirpath, "outputGegelati.csv")
                
                # Process the file
                try:
                    clean_motorpos_column(input_file, output_file)
                except Exception as e:
                    print(f"Failed to process {input_file}: {e}")

# Get the root directory (current directory where the script is located)
root_dir = os.getcwd()

# Process all matching files
process_all_files(root_dir)
