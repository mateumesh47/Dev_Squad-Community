import React, { useEffect, useState } from 'react';
import './App.css';
import TodoList from './TodoList';
import TodoTabs from './TodoTabs';
import { FontAwesomeIcon } from '@fortawesome/react-fontawesome';
import { faLightbulb, faMoon } from '@fortawesome/free-solid-svg-icons';

export default function App() {
  const [theme, setTheme] = useState('light');
  const [todos, setTodos] = useState(JSON.parse(localStorage.getItem('todos')) || []);
  const [inputTodo, setInputTodo] = useState('');
  const [filter, setFilter] = useState('all');

  const toggleTheme = () => {
    setTheme((prevTheme) => (prevTheme === 'light' ? 'dark' : 'light'));
  };

  const addTodo = (event) => {
    event.preventDefault();
    setTodos([...todos, { Task: inputTodo, id: Date.now().toString(), completed: false }]);
    setInputTodo('');
  };

  const deleteTask = (deletetodoId) => {
    const newTodos = todos.filter((item) => item.id !== deletetodoId);
    setTodos(newTodos);
  };

  const completedTask = (completedtodoId) => {
    const newTodos = todos.map((item) => {
      if (item.id === completedtodoId) {
        return { ...item, completed: !item.completed };
      }
      return item;
    });
    setTodos(newTodos);
  };

  const filterTodos = () => {
    if (filter === 'active') {
      return todos.filter((item) => !item.completed);
    }
    if (filter === 'completed') {
      return todos.filter((item) => item.completed);
    }
    return todos;
  };

  const clearCompletedTask = () => {
    const newTodos = todos.filter((item) => !item.completed);
    setTodos(newTodos);
  };

  useEffect(() => {
    localStorage.setItem('todos', JSON.stringify(todos));
  }, [todos]);

  return (
    <div className={`App ${theme}`}>
      <header className="App-header">
        <h1>Todo App</h1>
        <button className="theme-toggle" onClick={toggleTheme}>
          <FontAwesomeIcon icon={theme === 'light' ? faMoon : faLightbulb} />
        </button>
        <form>
          <input type="text" value={inputTodo} onChange={(event) => setInputTodo(event.target.value)} />
          <button type="submit" onClick={addTodo}>Add Todo</button>
        </form>
           <div className="todo-list">
              <TodoList todos={filterTodos()} deleteTask={deleteTask} completedTask={completedTask} />
           </div>
          <hr />

          <div className="todo-tabs">
          <TodoTabs filter={filter} setFilter={setFilter} todos={todos} />
          <button onClick={clearCompletedTask}>Clear All</button>
  
        </div>
      </header>
    </div>
  );
}
