package com.harshil.expensetracker.service;

import com.harshil.expensetracker.entity.Expense;
import com.harshil.expensetracker.exception.NoResourceFoundException;
import com.harshil.expensetracker.repo.ExpensesRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Pageable;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.Optional;

@Service
public class ExpenseServiceImpl implements ExpenseService {

    @Autowired
    private ExpensesRepository expensesRepository;

    @Override
    public List<Expense> getAllExpenses(Pageable pageable) {
        return expensesRepository.findAll(pageable).toList();
    }

    @Override
    public Expense getExpenseById(Long id) throws NoResourceFoundException {
        Optional<Expense> expense=expensesRepository.findById(id);
        if(expense.isPresent())
            return expense.get();
        throw new NoResourceFoundException("No data for this "+id+" id");
    }

    @Override
    public void deleteExpense(Long id) {
        expensesRepository.deleteById(id);
    }

    @Override
    public Expense saveExpense(Expense expense) {
        return expensesRepository.save(expense);
    }

    @Override
    public Expense updateExpense(Long id, Expense expense) {

        Expense existingExpense=expensesRepository.getById(id);

        existingExpense.setName(expense.getName()!=null?expense.getName():existingExpense.getName());
        existingExpense.setCategory(expense.getCategory()!=null?expense.getCategory():existingExpense.getCategory());
        existingExpense.setDate(expense.getDate()!=null?expense.getDate():existingExpense.getDate());
        existingExpense.setDescription(expense.getDescription()!=null?expense.getDescription():existingExpense.getDescription());
        existingExpense.setAmount(expense.getAmount()!=null?expense.getAmount():existingExpense.getAmount());
        return expensesRepository.save(existingExpense);
    }


}
