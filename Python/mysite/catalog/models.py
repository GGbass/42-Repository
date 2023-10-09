from django.db import models
from django.urls import reverse
import uuid

class Genre(models.Model):
    name = models.CharField(max_length = 64, help_text = 'Colocar el nombre del genero')

    def __str__(self):
        return self.name
    

class Actors(models.Model):
    title = models.CharField(max_length = 32)
    author = models.ForeignKey('Author', on_delete=models.SET_NULL, null=True)
    summary = models.TextField(max_length=100,help_text='De que trata la pelicula')
    isbn = models.CharField('ISBN ', max_length=13, help_text= '13 caracteres')
    genre = models.ManyToManyField(Genre)
    
    def __str__(self):
        return self.title
    
    def get_absolute_url(self):
        return reverse('book-detail ', args=[str(self.id)])
    
class BookInstance(models.Model):
    id = models.UUIDField(primary_key=True, default=uuid.uuid4, help_text='id unico de movie')
    book = models.ForeignKey('Book', on_delete=models.SET_NULL, null=True)
    imprint = models.CharField(max_length=200)
    due_back = models.DateField(null=True, blank=True)

    LOAN_STATUS = (
        ('m', 'Maintenance'),
        ('o', 'on loan'),
        ('a', 'Available'),
        ('r', 'Reserved'),
    )

    status = models.CharField(max_length=1, choices=LOAN_STATUS,blank=True, default='m',help_text='Disponibilidad')

class Meta:
    ordering = ["due_back"]

    def __str__(self):
        return '%s (%s)' % (self.id,self.movie.title)


class Authors(models.Model):
    first_name = models.CharField(max_length=100)
    last_name = models.CharField(max_length=100)
    date_of_birthday = models.DateField(null=True, blank=True)
    date_of_death = models.DateField('Dead' ,null=True, blank=True)

    def gef_absolute_url(self):
        return reverse('author-detail', args= [str(self.id)])

    def __str__(self):
        return '%s ,(%s)' % (self.last_name,self.first_name)       