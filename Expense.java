package com.harshil.expensetracker.entity;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import org.hibernate.annotations.CreationTimestamp;
import org.hibernate.annotations.UpdateTimestamp;

import javax.persistence.*;
import javax.validation.constraints.NotBlank;
import javax.validation.constraints.NotNull;
import javax.validation.constraints.Size;
import java.math.BigDecimal;
import java.sql.Timestamp;
import java.util.Date;

@Data
@AllArgsConstructor
@NoArgsConstructor
@Entity
@Table(name = "tbl_expenses")
public class Expense {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @Column(name = "expense_name")
    @NotBlank(message = "Please Enter valid expense name")
    @Size(min = 3,message = "No Valid Expense Name")
    private String name;

    @NotBlank(message = "Please enter valid description")
    private String description;

    @NotNull(message = "Amount can not be null" )
    private BigDecimal amount;

    @NotBlank(message = "Please Enter Valid Category")
    private String category;

    @NotNull(message = "Enter Valid Date")
    private Date date;

    @CreationTimestamp
    @Column(name = "created_at",nullable = false,updatable = false)
    private Timestamp createDate;

    @UpdateTimestamp
    @Column(name = "updated_at")
    private Timestamp updateDate;

}