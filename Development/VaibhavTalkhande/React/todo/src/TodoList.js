// TodoList.js
import React from 'react';
import './TodoList.css';

const TodoList = ({ todos, deleteTask, completedTask }) => {
  return (
    <ol>
      {todos.map((item) => (
        <li key={item.id}>
          <div className="todo-list">
            <input type="checkbox" checked={item.completed} onChange={() => completedTask(item.id)} />
            <span className={item.completed ? 'completed' : ''}>{item.Task}</span>
            <button onClick={() => deleteTask(item.id)}>Delete</button>
          </div>
        </li>
      ))}
    </ol>
  );
};

export default TodoList;
