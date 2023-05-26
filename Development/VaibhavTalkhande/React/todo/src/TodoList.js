// TodoList.js
import React from 'react';
import './TodoList.css';
const TodoList = ({ todos, deleteTask, completedTask }) => {
  return (
    <ol>
      {todos.map((item) => (
        <div className="todo-list">
        <li key={item.id}>
          <input type="checkbox" checked={item.completed} onChange={() => completedTask(item.id)} />
          <span className={item.completed ? 'completed' : ''}>{item.Task}</span>
          <button onClick={() => deleteTask(item.id)}>Delete</button>
        </li>
        </div>
      ))}
    </ol>
  );
};

export default TodoList;
