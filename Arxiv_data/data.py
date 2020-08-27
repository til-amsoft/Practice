from pathlib import Path
import pandas as pd

data_folder = Path("Documents/Arxiv_data/")

file = data_folder / "arxiv-metadata.json"

data = pd.read_json(file) #this program doesn't work but I am saving it for later
