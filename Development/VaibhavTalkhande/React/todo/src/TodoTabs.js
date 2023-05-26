// TodoTabs.js
import React from 'react';
import './TodoTabs.css';

const TodoTabs = ({ filter, setFilter, todos }) => {
  return (
    <div className="todo-tabs">
      <span>Active Tasks:</span>
      <span>{todos.filter((item) => !item.completed).length}</span>
      <button className={filter === 'all' ? 'btn btn-primary active' : 'btn btn-primary'} onClick={() => setFilter('all')}>All</button>
      <button className={filter === 'active' ? 'btn btn-primary active' : 'btn btn-primary'} onClick={() => setFilter('active')}>Active</button>
      <button className={filter === 'completed' ? 'btn btn-primary active' : 'btn btn-primary'} onClick={() => setFilter('completed')}>Completed</button>
    </div>
  );
};

export default TodoTabs;
