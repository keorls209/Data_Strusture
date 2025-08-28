# 🚦 Mini-Wasalny – Smart Graph-Based City Navigator

**Mini- Wasalny** is a C++ project designed to simulate a smart city navigation system. It allows users to interact with a dynamic map of cities, add/update/remove routes, visualize the network, and find the shortest path between any two cities using Dijkstra’s Algorithm — all through a user-friendly **Qt GUI interface**.

https://user-images.githubusercontent.com/your-demo-link.mp4  
*(Demo Video)*

---

## 🚀 Features

🔹 **Graph Creation & Editing**
- Add cities (nodes) and roads (edges)
- Delete cities or connections
- Update connections between locations

🔹 **Graph Algorithms**
- **Breadth-First Search (BFS)**
- **Depth-First Search (DFS)**
- **Dijkstra’s Algorithm** for shortest path

🔹 **Visualization**
- Cities and paths are rendered using a **Qt-based GUI**, providing an intuitive view of the graph.

🔹 **Persistence**
- Data is saved to files when the program exits
- Graph structure is automatically reloaded when the program starts

🔹 **User Interface**
- Qt GUI enables easy navigation and interaction with the graph
- Buttons for every operation (e.g. add city, find path, visualize)

---

## 🧠 Technologies Used

- **C++**
- **Standard Template Library (STL)**: `map`, `vector`, `priority_queue`, etc.
- **Graph Representation**: Adjacency List
- **Qt Framework** for GUI
- **File I/O** for saving/loading graph data

---

## 📂 Project Structure

GUI1/
├── Form Files/
│   └── GUI1.ui                  # Qt Designer form (GUI layout)
│
├── Header Files/
│   ├── Edges.h                 # Edge class definition
│   ├── Graph.h                 # Graph class definition
│   ├── GUI1.h                  # Main window class (Qt)
│   └── Vertex.h                # Vertex (city) class definition
│
├── Resource Files/
│   └── GUI1.qrc                # Qt resource file (e.g. images, icons)
│
├── Source Files/
│   ├── Edges.cpp               # Edge class implementation
│   ├── Graph.cpp               # Graph logic implementation
│   ├── GUI1.cpp                # GUI logic and Qt event handling
│   ├── Vertex.cpp              # Vertex class implementation
│   └── main.cpp                # Entry point of the program
│
├── project.pro                 # Qt project configuration file
└── README.md                   # Project description and usage

💻 How to Run

Make sure Qt and a C++ compiler are installed on your system.

Clone the repo:

git clone https://github.com/YourUsername/Data_Structure.git
cd Data_Structure

Open the project in Qt Creator or run the following commands to build it manually (if applicable):

qmake
make
./Data_Structure  # or Data_Structure.exe on Windows

💡 Note: This project uses Qt for the GUI and STL for core data structures, so make sure your environment supports both.


Team Members
Esraa Mahmoud 
Mkarios Magdy
Raneem Ashraf
Abdulrahman Diab
Shourok Essam
Kerolos Ayman

Acknowledgments
Special thanks to Dr.Hanan Hendy for her guidance and feedback throughout the project.
Part of the Data Structures course at Ain Shams University

## 🎥 Demo
![Watch the video](https://drive.google.com/file/d/1RVRiv5OrjcEWhJjeEXGJvl3XLPuepI3X/view?usp=sharing)
