setwd("~/GitHub/Practice/Arxiv_data")

library("jsonlite")
data <- read_json(arxiv-metadata.json, simplifyVector = TRUE)