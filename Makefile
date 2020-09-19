SRC = src/phy_equation.c\
main.c

INC = -Iinc

PROJECT_NAME = phy_equation.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}