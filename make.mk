all : NicolasManrique_gravity.cpp NicolasManrique_graph.py
	g++ NicolasManrique_gravity.cpp
	./a.out>tray.txt
	python NicolasManrique_graph.py
