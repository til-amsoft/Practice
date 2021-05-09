library(readr)
library(dplyr)
library("ggplot2")
library("RColorBrewer")

Initial_DSC <- read_csv("Part III Project/Initial_DSC.csv")
DSC<-Initial_DSC %>% filter(Initial_DSC$Segment == 2 |Initial_DSC$Segment == 4 |Initial_DSC$Segment == 6)
Heat1<-Initial_DSC %>% filter(Initial_DSC$Segment == 2)
Cool <- Initial_DSC %>% filter(Initial_DSC$Segment == 4)
Heat2 <- Initial_DSC %>% filter(Initial_DSC$Segment == 6)

ggplot(
  data = DSC) + 
  geom_line(aes(x=Temp, y=DSC, color=as.factor(Segment)))+
  ggtitle("DSC") +
  xlab("Temp/°C") +
  ylab("DSC/(mW/mg)")+
  xlim(500,1150)+
  scale_fill_brewer(palette="Set3")


ggplot(
  data = Heat1) + 
  geom_line(aes(x=Temp, y=DSC))+
  ggtitle("DSC") +
  xlab("Temp/°C") +
  ylab("DSC/(mW/mg)")+
  xlim(500,1150)

ggplot(
  data = Cool) + 
  geom_line(aes(x=Temp, y=DSC))+
  ggtitle("DSC") +
  xlab("Temp/°C") +
  ylab("DSC/(mW/mg)")+
  xlim(500,1150)

ggplot(
  data = Heat2) + 
  geom_line(aes(x=Temp, y=DSC))+
  ggtitle("DSC") +
  xlab("Temp/°C") +
  ylab("DSC/(mW/mg)")+
  xlim(500,1150)

