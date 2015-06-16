<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.op1 = New System.Windows.Forms.Label()
        Me.op2 = New System.Windows.Forms.Label()
        Me.result = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.txtOp1 = New System.Windows.Forms.TextBox()
        Me.TxtOp2 = New System.Windows.Forms.TextBox()
        Me.txtResult = New System.Windows.Forms.TextBox()
        Me.txtTime1 = New System.Windows.Forms.TextBox()
        Me.txtTime2 = New System.Windows.Forms.TextBox()
        Me.txtTime3 = New System.Windows.Forms.TextBox()
        Me.Bt_Late = New System.Windows.Forms.Button()
        Me.Bt_ID = New System.Windows.Forms.Button()
        Me.Bt_vtbl = New System.Windows.Forms.Button()
        Me.TextBox5 = New System.Windows.Forms.TextBox()
        Me.SuspendLayout()
        '
        'op1
        '
        Me.op1.AutoSize = True
        Me.op1.Location = New System.Drawing.Point(40, 38)
        Me.op1.Name = "op1"
        Me.op1.Size = New System.Drawing.Size(25, 13)
        Me.op1.TabIndex = 0
        Me.op1.Text = "op1"
        '
        'op2
        '
        Me.op2.AutoSize = True
        Me.op2.Location = New System.Drawing.Point(196, 38)
        Me.op2.Name = "op2"
        Me.op2.Size = New System.Drawing.Size(25, 13)
        Me.op2.TabIndex = 1
        Me.op2.Text = "op2"
        '
        'result
        '
        Me.result.AutoSize = True
        Me.result.Location = New System.Drawing.Point(348, 38)
        Me.result.Name = "result"
        Me.result.Size = New System.Drawing.Size(32, 13)
        Me.result.TabIndex = 2
        Me.result.Text = "result"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(40, 124)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(36, 13)
        Me.Label4.TabIndex = 3
        Me.Label4.Text = "Time1"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(196, 124)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(36, 13)
        Me.Label5.TabIndex = 4
        Me.Label5.Text = "Time2"
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Location = New System.Drawing.Point(348, 124)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(36, 13)
        Me.Label6.TabIndex = 5
        Me.Label6.Text = "Time3"
        '
        'txtOp1
        '
        Me.txtOp1.Location = New System.Drawing.Point(12, 66)
        Me.txtOp1.Name = "txtOp1"
        Me.txtOp1.Size = New System.Drawing.Size(100, 20)
        Me.txtOp1.TabIndex = 6
        '
        'TxtOp2
        '
        Me.TxtOp2.Location = New System.Drawing.Point(163, 66)
        Me.TxtOp2.Name = "TxtOp2"
        Me.TxtOp2.Size = New System.Drawing.Size(100, 20)
        Me.TxtOp2.TabIndex = 7
        '
        'txtResult
        '
        Me.txtResult.Location = New System.Drawing.Point(330, 66)
        Me.txtResult.Name = "txtResult"
        Me.txtResult.Size = New System.Drawing.Size(100, 20)
        Me.txtResult.TabIndex = 8
        '
        'txtTime1
        '
        Me.txtTime1.Location = New System.Drawing.Point(12, 174)
        Me.txtTime1.Name = "txtTime1"
        Me.txtTime1.Size = New System.Drawing.Size(132, 20)
        Me.txtTime1.TabIndex = 9
        '
        'txtTime2
        '
        Me.txtTime2.Location = New System.Drawing.Point(163, 174)
        Me.txtTime2.Name = "txtTime2"
        Me.txtTime2.Size = New System.Drawing.Size(143, 20)
        Me.txtTime2.TabIndex = 10
        '
        'txtTime3
        '
        Me.txtTime3.Location = New System.Drawing.Point(330, 174)
        Me.txtTime3.Name = "txtTime3"
        Me.txtTime3.Size = New System.Drawing.Size(126, 20)
        Me.txtTime3.TabIndex = 11
        '
        'Bt_Late
        '
        Me.Bt_Late.Location = New System.Drawing.Point(12, 209)
        Me.Bt_Late.Name = "Bt_Late"
        Me.Bt_Late.Size = New System.Drawing.Size(75, 23)
        Me.Bt_Late.TabIndex = 12
        Me.Bt_Late.Text = "Late Binding"
        Me.Bt_Late.UseVisualStyleBackColor = True
        '
        'Bt_ID
        '
        Me.Bt_ID.Location = New System.Drawing.Point(163, 209)
        Me.Bt_ID.Name = "Bt_ID"
        Me.Bt_ID.Size = New System.Drawing.Size(75, 23)
        Me.Bt_ID.TabIndex = 13
        Me.Bt_ID.Text = "ID_binding"
        Me.Bt_ID.UseVisualStyleBackColor = True
        '
        'Bt_vtbl
        '
        Me.Bt_vtbl.Location = New System.Drawing.Point(330, 209)
        Me.Bt_vtbl.Name = "Bt_vtbl"
        Me.Bt_vtbl.Size = New System.Drawing.Size(75, 23)
        Me.Bt_vtbl.TabIndex = 14
        Me.Bt_vtbl.Text = "Vtbl_binding"
        Me.Bt_vtbl.UseVisualStyleBackColor = True
        '
        'TextBox5
        '
        Me.TextBox5.Location = New System.Drawing.Point(163, 174)
        Me.TextBox5.Name = "TextBox5"
        Me.TextBox5.Size = New System.Drawing.Size(143, 20)
        Me.TextBox5.TabIndex = 10
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(499, 296)
        Me.Controls.Add(Me.Bt_vtbl)
        Me.Controls.Add(Me.Bt_ID)
        Me.Controls.Add(Me.Bt_Late)
        Me.Controls.Add(Me.txtTime3)
        Me.Controls.Add(Me.txtTime2)
        Me.Controls.Add(Me.txtTime1)
        Me.Controls.Add(Me.txtResult)
        Me.Controls.Add(Me.TxtOp2)
        Me.Controls.Add(Me.txtOp1)
        Me.Controls.Add(Me.Label6)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.result)
        Me.Controls.Add(Me.op2)
        Me.Controls.Add(Me.op1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents op1 As System.Windows.Forms.Label
    Friend WithEvents op2 As System.Windows.Forms.Label
    Friend WithEvents result As System.Windows.Forms.Label
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents txtOp1 As System.Windows.Forms.TextBox
    Friend WithEvents TxtOp2 As System.Windows.Forms.TextBox
    Friend WithEvents txtResult As System.Windows.Forms.TextBox
    Friend WithEvents txtTime1 As System.Windows.Forms.TextBox
    Friend WithEvents txtTime2 As System.Windows.Forms.TextBox
    Friend WithEvents txtTime3 As System.Windows.Forms.TextBox
    Friend WithEvents Bt_Late As System.Windows.Forms.Button
    Friend WithEvents Bt_ID As System.Windows.Forms.Button
    Friend WithEvents Bt_vtbl As System.Windows.Forms.Button
    Friend WithEvents TextBox5 As System.Windows.Forms.TextBox

End Class
