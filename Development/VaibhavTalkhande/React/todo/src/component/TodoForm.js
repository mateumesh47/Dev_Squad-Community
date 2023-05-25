//TodoForm.js
import React from "react";
import "../ui/TodoForm.css";
function TodoForm(props) {
    return (
        <div className="todo-form">
            <input
                type="text"
                placeholder="Enter todo"
                value={props.todoText}
                onChange={(e) => props.setTodoText(e.target.value)}
            />
            <button onClick={props.addTodo}>Add</button>
            {props.todoError && <p className="error">{props.todoError}</p>}
        </div>
    );
}
export default TodoForm;