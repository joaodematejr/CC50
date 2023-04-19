from flask import Flask, render_template, request, redirect, url_for
import json

@app.route('/')
def index():
    # exibe a lista de aniversários
    return render_template('index.html')

@app.route('/add', methods=['POST'])
def add():
    # adiciona um novo aniversário
    return redirect(url_for('index'))

@app.route('/', methods=['GET'])
def index():
    # exibe a lista de aniversários
    with open('birthdays.json') as f:
        birthdays = json.load(f)
    return render_template('index.html', birthdays=birthdays)

@app.route('/add', methods=['POST'])
def add():
    # adiciona um novo aniversário
    name = request.form['name']
    date = request.form['date']

    with open('birthdays.json') as f:
        birthdays = json.load(f)

    birthdays.append({'name': name, 'date': date})

    with open('birthdays.json', 'w') as f:
        json.dump(birthdays, f)

    return redirect(url_for('index'))


app = Flask(__name__)
