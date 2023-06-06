import React, { useState } from 'react';
import './TodoForm.css';

const TodoForm = ({ addTodo }) => {
  const [inputTodo, setInputTodo] = useState('');

  const handleSubmit = (event) => {
    event.preventDefault();
    if (inputTodo.trim() !== null && inputTodo.trim() !== '') {
      addTodo(inputTodo);
      setInputTodo('');
    }
  };

  return (
    <div className="todo-form">
      <form onSubmit={handleSubmit}>
        <input type="text" value={inputTodo} onChange={(event) => setInputTodo(event.target.value)} />
        <button className="button-52" type="submit">Add Todo</button>
      </form>
    </div>
  );
};

export default TodoForm;
