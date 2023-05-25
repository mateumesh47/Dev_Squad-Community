import { useState,useEffect } from "react";
import TodoForm from "./TodoForm";
import TodoList from "./TodoList";
import "../ui/TodoApp.css";
//edit todo mark complete checkbox 
//three section all active completed tab
//store data in local storage
//minimal code
function TodoApp() {
    const [todos, setTodos] = useState([]);
    const [todoText, setTodoText] = useState("");
    const [todoError, setTodoError] = useState("");
    const [editTodoIndex, setEditTodoIndex] = useState(-1);
    const [editTodoText, setEditTodoText] = useState("");
    useEffect(() => {
        const todos = JSON.parse(localStorage.getItem("todos"));
        if (todos) {
            setTodos(todos);
        }
    }, []);
    useEffect(() => {
        localStorage.setItem("todos", JSON.stringify(todos));
    }, [todos]);
    const addTodo = () => {
        if (todoText.trim().length === 0) {
            setTodoError("Todo is required");
            return;
        }
        if (editTodoIndex === -1) {
            setTodos([...todos, todoText]);
        } else {
            const newTodos = [...todos];
            newTodos[editTodoIndex] = editTodoText;
            setTodos(newTodos);
            setEditTodoIndex(-1);
        }
        setTodoText("");
        setTodoError("");
    };
    const removeTodoHandler = (index) => {
        const newTodos = [...todos];
        newTodos.splice(index, 1);
        setTodos(newTodos);
    };
    //update list after edit
    const editTodoHandler = (index) => {
        setEditTodoIndex(index);
        setEditTodoText(todos[index]);
        setTodoText(todos[index]);
    };
    return (
        <div className="todo-app">
            <TodoForm
                todoText={todoText}
                setTodoText={setTodoText}
                todoError={todoError}
                addTodo={addTodo}
            />
            <TodoList
                todos={todos}
                removeTodoHandler={removeTodoHandler}
                editTodoHandler={editTodoHandler}
            />
        </div>
    );
}

export default TodoApp;


