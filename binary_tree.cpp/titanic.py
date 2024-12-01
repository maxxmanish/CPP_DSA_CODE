import pandas as pd 
df = pd.read_csv('titanic_Data_Train.csv')
df.head()
df.drop(['PassengerId','Name','SibSp','Parch','Ticket','Cabin','Embarked'], axis='columns',inplace= True)
df.head()
target = df.Survived
input= df.drop('Survived',axis ='columns')
target
input
dummies = pd.get_dummies(input.Sex)
dummies.head(3)
input - pd.concat([input,dummies],axis='columns')
input.head()
input.drop('Sex',axis='columns',inplace=True)
input.head()
input.columns[input.isna().any()]
input.Age[:10]
input.Age=input.Age.fillna(input.Age.mean())
input.head(10)
from sklearn.model_selection import train_test_split 
x_train, x_test, y_train,y_test = train_test_split(input,target,test_size=0.2)
len(x_train)
len(x_test)
len(input)
from sklearn.naive_bayes import GaussianNB 
model = GaussianNB()
model.fit(x_train,y_train)

model.score(x_test,y_test)

x_test[:10]
y_test[:10]
model.predict(x_test[:10])
model.predict_proba(x_test[:10])
from sklearn.metrics import accuracy_score
predict_train = model.predict(x-train)

accuracy_train = accuracy_score(y_train,predict_train)
print('accuracy_score on train dataset:',accuracy_train)

predict_test = model.predict(x-x_test)

accuracy_test = accuracy_score(y_test,predict_test)
print('accuracy_svore on train dataset:',accuracy_test)
