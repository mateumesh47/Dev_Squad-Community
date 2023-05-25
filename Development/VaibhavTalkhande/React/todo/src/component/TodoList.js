import React from "react";

function TodoList(props) {
    return (
        <div className="todo-list">
            {props.todos.map((todo, index) => (
                <div key={index} className="todo-item">
                    <p>{todo}</p>
                    <div>
                        <button onClick={() => props.editTodoHandler(index)}>Edit</button>
                        <button onClick={() => props.removeTodoHandler(index)}>Delete</button>
                    </div>
                </div>
            ))}
        </div>
    );
}

export default TodoList;