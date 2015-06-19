using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace CalendarLab4
{
    public partial class Form1 : Form
    {
        int lastDay = 31;

        public Form1()
        {
            InitializeComponent();            

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            for (int month = 1; month < 13; month++)
            {
                comboBox1.Items.Add(month);
            }
            //textBox1.Text = DateTime.Now.Day.ToString()+"." + DateTime.Now.Month.ToString()+"." + DateTime.Now.Year.ToString();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int year = DateTime.Now.Year;
            int month = (short)int.Parse(comboBox1.SelectedItem.ToString());
            int day = (short)int.Parse(comboBox2.SelectedItem.ToString());
            monthCalendar1.TodayDate = new System.DateTime(year, month, day);
            monthCalendar1.SelectionStart = new System.DateTime(year, month, day);
            monthCalendar1.SelectionEnd = new System.DateTime(year, month, day);
        }

        private void comboBox1_SelectedValueChanged(object sender, EventArgs e)
        {
            comboBox2.Items.Clear();
            comboBox2.Text = "";
                int month = int.Parse(comboBox1.SelectedItem.ToString());
                if (month == 4 || month == 6 || month == 9 || month == 11)
                {
                    lastDay = 30;
                }
                else
                    if (month == 2)
                    {
                        lastDay = 28;
                    }
                    else
                    {
                        lastDay = 31;
                    }

                for (int day = 1; day < lastDay + 1; day++)
                {
                    comboBox2.Items.Add(day);
                }
            
        }

        
    }
}
